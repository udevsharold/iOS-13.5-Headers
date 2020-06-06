/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface MKCompassView : UIView {

	UIImageView* _imageView;
	long long _compassViewSize;
	long long _compassViewStyle;

}

@property (assign,nonatomic) double mapHeading; 
@property (nonatomic,readonly) long long compassViewSize;               //@synthesize compassViewSize=_compassViewSize - In the implementation block
@property (nonatomic,readonly) long long compassViewStyle;              //@synthesize compassViewStyle=_compassViewStyle - In the implementation block
@property (assign,nonatomic) double yaw; 
+(id)_parameterForSize:(long long)arg1 ;
+(id)_parameterForStyle:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(double)yaw;
-(void)setYaw:(double)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateStyle;
-(void)movedToWindow:(id)arg1 ;
-(void)setCompassViewSize:(long long)arg1 style:(long long)arg2 ;
-(void)setMapHeading:(double)arg1 ;
-(long long)compassViewSize;
-(long long)compassViewStyle;
-(void)updateLocale:(id)arg1 ;
-(void)_updateLayerForCurrentSizeAndStyle;
-(void)_adaptCompassStyleToUserInterfaceStyle;
-(double)mapHeading;
-(BOOL)isPointInNorthEastHalf:(CGPoint)arg1 ;
@end

