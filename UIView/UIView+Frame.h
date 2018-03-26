//
//  UIView+Frame.h
//  DreamChase
//
//  Created by FangChao on 16/5/19.
//  Copyright © 2016年 DearmChase. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)
// x坐标
@property (nonatomic, assign) CGFloat x;
// y坐标
@property (nonatomic, assign) CGFloat y;
// 宽度
@property (nonatomic, assign) CGFloat width;
// 高度
@property (nonatomic, assign) CGFloat height;
//大小
@property (nonatomic,assign ) CGSize  size;
//位置
@property (nonatomic,assign ) CGPoint origin;
//中心点x
@property (nonatomic,assign ) CGFloat centerX;
//中心点y
@property (nonatomic,assign ) CGFloat centerY;
@end
