//
//  SPHelper.h
//  SpotlightPlugin
//
//  Created by Rencp on 2019/5/24.
//  Copyright © 2019 Kssion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface SPHelper : NSObject

/**
 替换对象方法

 @param originalClass 原始类
 @param originalSelector 原始类的方法
 @param swizzledClass 替换类
 @param swizzledSelector 替换类的方法
 */
void sp_hookMethod(Class originalClass, SEL originalSelector, Class swizzledClass, SEL swizzledSelector);

/**
 替换类方法
 
 @param originalClass 原始类
 @param originalSelector 原始类的类方法
 @param swizzledClass 替换类
 @param swizzledSelector 替换类的类方法
 */
void sp_hookClassMethod(Class originalClass, SEL originalSelector, Class swizzledClass, SEL swizzledSelector);

@end
