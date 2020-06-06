/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView {

	double _currentProgress;
	UIImageView* _appleLogo;
	unsigned long long _style;
	unsigned long long _version;

}

@property (nonatomic,retain) UIImageView * appleLogo;                 //@synthesize appleLogo=_appleLogo - In the implementation block
@property (assign,nonatomic) unsigned long long style;                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double currentProgress;                  //@synthesize currentProgress=_currentProgress - In the implementation block
-(unsigned long long)version;
-(CGSize)_size;
-(void)setVersion:(unsigned long long)arg1 ;
-(double)currentProgress;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(double)_tickLength;
-(id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2 ;
-(UIImageView *)appleLogo;
-(void)setAppleLogo:(UIImageView *)arg1 ;
@end

