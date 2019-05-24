//
//  main.c
//  WeChatPlugin
//
//  Created by TK on 2017/4/19.
//  Copyright © 2017年 tk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Spotlight+hook.h"

static void __attribute__((constructor)) initialize(void) {
    NSLog(@"++++++++ Plugin loaded ++++++++");
    [NSObject hookSpotlight];
}
