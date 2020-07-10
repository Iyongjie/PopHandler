//
//  UIViewController+PopHandler.h
//  PopHandler
//
//  Created by 李永杰 on 2020/7/10.
//  Copyright © 2020 李永杰. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol PopHandlerProtocol <NSObject>

@optional
/**
 导航是否可以pop

 @return YES：可以，NO：不可以
 */
- (BOOL)navigationShouldPop;

@end

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (PopHandler)<PopHandlerProtocol>

@end

NS_ASSUME_NONNULL_END
