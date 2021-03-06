//
//  InviteController.h
//  wangcai
//
//  Created by 1528 on 13-12-11.
//  Copyright (c) 2013年 1528studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InviterUpdate.h"

@interface InviteController : UIViewController <InviterUpdateDelegate, UITextFieldDelegate>
{
}

@property (assign, nonatomic) BeeUIStack* _beeStack;

@property (assign, nonatomic) UIView *containerView;

@property (retain, nonatomic) UIView *inviteView;
@property (assign, nonatomic) UITextField *inviteUrlTextField;
@property (assign, nonatomic) UIImageView *qrcodeView;
@property (assign, nonatomic) UILabel *receiveMoneyLabel;
@property (assign, nonatomic) UILabel *inviteCodeLabel;
@property (assign, nonatomic) UIButton *shareButton;

@property (retain, nonatomic) NSArray* priorConstraints;

@property (assign, nonatomic) NSUInteger receiveMoney;
@property (copy, nonatomic) NSString* inviteCode;

@property (assign, nonatomic) UILabel* inviteIncome;
@property (assign, nonatomic) UILabel* inviteIncomeTip;

- (IBAction)copyUrl:(id)sender;
- (IBAction)share:(id)sender;
- (IBAction)clickBack:(id)sender;
- (IBAction)hideKeyboard:(id)sender;

- (IBAction)clickTextLink:(id)sender;

@end
