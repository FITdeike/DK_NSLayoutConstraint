//
//  NSLayoutConstraint+DKDesignable.h
//  test
//
//  Created by 丁凯 on 2020/4/19.
//  Copyright © 2020 Myt. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IS_IPHONE_4 ((double)[[UIScreen mainScreen] bounds].size.height == (double )480)

#define IS_IPHONE_5  ((double)[[UIScreen mainScreen] bounds].size.height == (double )568)

#define IS_IPHONE_6 ((double)[[UIScreen mainScreen] bounds].size.height == (double )667)

#define IS_IPHONE_6_PLUS  ((double)[[UIScreen mainScreen] bounds].size.height == (double )736)

#define IS_IPHONE_X  ((double)[[UIScreen mainScreen] bounds].size.height == (double )812)

#define IS_IPHONE_XR  ((double)[[UIScreen mainScreen] bounds].size.height == (double )896)

#define IS_IPHONE_XS_MAX  ((double)[[UIScreen mainScreen] bounds].size.height == (double )896)

////适配参数
#define suitParm (IS_IPHONE_4 ? 0.720 : (IS_IPHONE_5 ? 0.852 : (IS_IPHONE_6_PLUS ? 1.103 :(IS_IPHONE_X ? 1.217 : (IS_IPHONE_XR ? 1.343 : 1)))))
//(IS_IPHONE_6_PLUS ? 1.11 : (IS_IPHONE_6 ? 1.0 : (IS_IPHONE_X ? 1.13 :(IS_IPHONE_5 ? 0.75 : 0.5))))
#define isIphoneX (IS_IPHONE_X || IS_IPHONE_XR || IS_IPHONE_XS_MAX ? YES : NO)

NS_ASSUME_NONNULL_BEGIN

@interface NSLayoutConstraint (DKDesignable)

@property(nonatomic, assign) IBInspectable BOOL adapterScreen;

@property(nonatomic, assign) IBInspectable BOOL adapterIphontXBottom;

@end

NS_ASSUME_NONNULL_END
