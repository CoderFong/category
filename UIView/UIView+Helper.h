//
//  UIView+Helper.h
//  TestDemo
//
//  Created by Playboy on 16/9/28.
//  Copyright © 2016年 wzkj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Helper)
/**
 *  从xib加载view
 */
+ (instancetype)pb_nib;

/**
 *  给view添加点击事件
 */
- (void)pb_addTapActionWithBlock:(void(^)())block;

/**
 *  获取当前view的controller
 */
- (UIViewController *)pb_viewController;

@end
