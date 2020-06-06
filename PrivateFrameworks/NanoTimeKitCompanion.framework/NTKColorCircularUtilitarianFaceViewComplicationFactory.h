/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@protocol NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate;
@class NTKUtilityComplicationFactory, NSString;

@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKUtilityComplicationFactoryDelegate> {

	NTKUtilityComplicationFactory* _complicationFactory;
	id<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate>)delegate;
-(void)setDelegate:(id<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate>)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(long long)keylineStyleForComplicationSlot:(id)arg1 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(id)curvedMaskForSlot:(id)arg1 ;
-(id)_utilityComplicationSlots;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(double)_edgeGapForState:(long long)arg1 ;
-(double)_lisaGapForState:(long long)arg1 ;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_colorComplicationSlots;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 faceView:(id)arg2 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(id)_complicationSlots;
-(void)prepareForEditingForFaceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg1 ;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3 ;
-(void)curvedCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
@end

