/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAPackage, CALayer, CAStateController;

@interface PKReaderModeAnimationView : UIView {

	unsigned long long _state;
	CAPackage* _package;
	CALayer* _phoneLayer;
	CAStateController* _stateController;
	BOOL _isPhoneTarget;

}

@property (assign,nonatomic) unsigned long long state; 
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setDigitalCardImage:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg1 ;
-(id)initWithAssetName:(id)arg1 forPhoneTarget:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 assetName:(id)arg2 forPhoneTarget:(BOOL)arg3 ;
-(void)setImageForCard:(id)arg1 image:(id)arg2 ;
-(unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1 ;
-(void)_setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end

