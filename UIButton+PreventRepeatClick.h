//
//  UIButton+PreventRepeatClick.h
//  Buchouyang
//
//  Created by 宋林城 on 2017/11/9.
//  Copyright © 2017年 Sinocode. All rights reserved.
//  防止重复点击

#import <UIKit/UIKit.h>

#define defaultInterval 1.0//默认时间间隔

@interface UIButton (PreventRepeatClick)

/** 用这个给重复点击加间隔 */
@property(assign, nonatomic) NSTimeInterval timeInterval;
/** YES不允许点击NO允许点击 */
@property(assign, nonatomic) BOOL isIgnoreEvent;
@end
