//
//  Spotlight+Plugin.h
//  SpotlightPlugin
//
//  Created by Rencp on 2019/5/24.
//  Copyright © 2019 Kssion. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Hook)

+ (void)hookSpotlight;

@end

NS_ASSUME_NONNULL_END
