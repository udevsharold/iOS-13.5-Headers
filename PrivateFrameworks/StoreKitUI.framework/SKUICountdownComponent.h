/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUICountdown;

@interface SKUICountdownComponent : SKUIPageComponent {

	SKUICountdown* _countdown;

}

@property (nonatomic,retain) SKUICountdown * countdown;              //@synthesize countdown=_countdown - In the implementation block
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(SKUICountdown *)countdown;
-(void)setCountdown:(SKUICountdown *)arg1 ;
@end
