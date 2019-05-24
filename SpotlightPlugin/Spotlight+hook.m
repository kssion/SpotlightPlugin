//
//  Spotlight+Plugin.m
//  SpotlightPlugin
//
//  Created by Rencp on 2019/5/24.
//  Copyright © 2019 Kssion. All rights reserved.
//

#import "Spotlight+hook.h"
#import "SpotlightPlugin.h"
#import "SPHelper.h"

@implementation NSObject (Hook)

+ (void)hookSpotlight {
    SEL initMethod = @selector(init);
    sp_hookMethod(objc_getClass("SPStatusItemView"), initMethod, [self class], @selector(hook_init));
}

- (id)hook_init {
    [self hook_init];
    NSLog(@"就把你改掉！？");
    
    NSStatusBar *statusBar = [NSStatusBar systemStatusBar];
    [statusBar removeStatusItem:((SPStatusItemView *)self).statusItem];
    
    return self;
}

@end
