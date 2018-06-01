//
//  UIApplication+Visible.h
//  PBHomeDemo
//
//  Created by Playboy on 2018/6/1.
//  Copyright © 2018年 tmkj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (Visible)

// 获取当前显示的Nav 任意界面进行push present
- (UINavigationController *)visibleNavigationController;

@end
