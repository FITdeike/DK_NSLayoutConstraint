//
//  NSLayoutConstraint+DKDesignable.m
//  test
//
//  Created by 丁凯 on 2020/4/19.
//  Copyright © 2020 Myt. All rights reserved.
//

#import "DK_NSLayoutConstraint+DKDesignable.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored"-Wobjc-property-implementation"
 
@implementation NSLayoutConstraint (DKDesignable)
 
#pragma clang diagnostic pop

- (void)setAdapterScreen:(BOOL)adapterScreen
{
    if (adapterScreen){
        self.priority = 999;
        NSLog(@"%f",suitParm);
        self.constant = self.constant * suitParm;
    }
}

- (void)setAdapterIphontXBottom:(BOOL)adapterIphontXBottom {
    BOOL adapterIphontXBottomStr = adapterIphontXBottom;
    if (adapterIphontXBottomStr){
        if (isIphoneX) {
            self.constant += 100;
        }
    }
}

- (BOOL)adapterScreen
{
    return YES;
}


@end
