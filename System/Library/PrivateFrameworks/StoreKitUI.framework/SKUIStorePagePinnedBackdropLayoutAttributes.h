/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backdropColor;
	NSString* _backdropGroupName;
	long long _backdropStyle;
	BOOL _hidesBackdropView;
	double _transitionProgress;

}

@property (nonatomic,retain) UIColor * backdropColor;                 //@synthesize backdropColor=_backdropColor - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long backdropStyle;                 //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesBackdropView;                  //@synthesize hidesBackdropView=_hidesBackdropView - In the implementation block
@property (assign,nonatomic) double transitionProgress;               //@synthesize transitionProgress=_transitionProgress - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setBackdropStyle:(long long)arg1 ;
-(long long)backdropStyle;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(void)setHidesBackdropView:(BOOL)arg1 ;
-(void)setBackdropColor:(UIColor *)arg1 ;
-(BOOL)hidesBackdropView;
-(UIColor *)backdropColor;
@end

