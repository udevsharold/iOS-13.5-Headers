/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView {

	BOOL _hidesWhenFullyTransparent;
	MPUBorderConfiguration* _borderConfiguration;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenFullyTransparent;                          //@synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent - In the implementation block
@property (nonatomic,readonly) double requiredOutsetForDropShadow; 
@property (nonatomic,readonly) UIEdgeInsets resizableImageCapInsets; 
+(double)requiredOutsetForDropShadow;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(double)requiredOutsetForDropShadow;
-(MPUBorderConfiguration *)borderConfiguration;
-(UIEdgeInsets)resizableImageCapInsets;
-(BOOL)hidesWhenFullyTransparent;
-(void)setHidesWhenFullyTransparent:(BOOL)arg1 ;
@end

