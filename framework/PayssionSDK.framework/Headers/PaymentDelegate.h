//
//  PaymentDelegate.h
//  Payssion-Example
//
//  Created by UlquiorraCifer on 16/11/23.
//  Copyright © 2016年 Payssion. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PaymentDelegate <NSObject>

-(void)processOrderWithPayResponse:(PayResponse *)payResponse;

@end