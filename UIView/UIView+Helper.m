//
//  UIView+Helper.m
//  TestDemo
//
//  Created by Playboy on 16/9/28.
//  Copyright © 2016年 wzkj. All rights reserved.
//

#import "UIView+Helper.h"
#import <objc/runtime.h>

static const char *tapGestureKey;

@implementation UIView (Helper)
/**
 *  从xib加载view
 */
+ (instancetype)pb_nib {
    NSArray *nibs = [[NSBundle mainBundle] loadNibNamed:[self description] owner:nil options:nil];
    if (nibs.count) {
        return nibs.firstObject;
    }
    return nil;
}

/**
 *  给view添加点击事件
 */
- (void)pb_addTapActionWithBlock:(void (^)())block {
    self.userInteractionEnabled = YES;
    UITapGestureRecognizer *tap = objc_getAssociatedObject(self, &tapGestureKey);
    if (!tap) {
        tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapClick:)];
        [self addGestureRecognizer:tap];
        objc_setAssociatedObject(self, &tapGestureKey, tap, OBJC_ASSOCIATION_RETAIN);
    }
    objc_setAssociatedObject(self, &tapGestureKey, block, OBJC_ASSOCIATION_COPY);
}
- (void)tapClick:(UITapGestureRecognizer *)gesture {
    if (gesture.state == UIGestureRecognizerStateRecognized) {
        void(^action)(void) = objc_getAssociatedObject(self, &tapGestureKey);
        if (action) {
            action();
        }
    }
}

/**
 *  获取当前view的controller
 */
- (UIViewController *)pb_viewController{
    for (UIView *next = [self superview]; next; next = next.superview) {
        UIResponder *nextResponder = [next nextResponder];
        if ([nextResponder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)nextResponder;
        }
    }
    return nil;
}
@end
