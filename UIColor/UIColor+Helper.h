//
//  UIColor+Helper.h
//  DreamChase
//
//  Created by Playboy on 16/6/11.
//  Copyright © 2016年 DearmChase. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Helper)

/**
 *  从十六进制字符串获取颜色
 *
 *  @param color 支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 *
 */
+ (UIColor *)pb_colorWithHexString:(NSString *)color;
+ (UIColor *)pb_colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

@end
