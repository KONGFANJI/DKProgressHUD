//
//  DKCallbackMessage.h
//  DKProgressHUD
//
//  Created by 庄槟豪 on 2016/10/21.
//  Copyright © 2016年 cn.dankal. All rights reserved.
//  消息回调模型，可用于MVVM架构中，RAC框架下vm发送信号给控制器，控制器根据此模型来show对应类型的HUD.

#import <Foundation/Foundation.h>

@interface DKCallbackMessage : NSObject

@property (nonatomic, copy) NSString *successMessage;
@property (nonatomic, copy) NSString *infoMessage;
@property (nonatomic, copy) NSString *errorMessage;

- (instancetype)initWithSuccessMessage:(NSString *)successMessage;
- (instancetype)initWithInfoMessage:(NSString *)infoMessage;
- (instancetype)initWithErrorMessage:(NSString *)errorMessage;

+ (instancetype)callbackSuccessMessage:(NSString *)successMessage;
+ (instancetype)callbackInfoMessage:(NSString *)infoMessage;
+ (instancetype)callbackErrorMessage:(NSString *)errorMessage;

@end
