/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardKeyplaneTransformation.h>

@class NSString;

@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationIdentifier;
+(id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)cachedControlKeySetsForTransformationContext:(id)arg1 ;
+(double)_totalKeyPaddingForOrientation:(long long)arg1 ;
+(double)_keyplanePaddingForOrientation:(long long)arg1 ;
+(unsigned long long)_numberOfKeysInRow:(id)arg1 firstKey:(id*)arg2 lastKey:(id*)arg3 ;
+(id)_supplementaryControlKeySetForOrientation:(long long)arg1 context:(id)arg2 ;
+(id)_supplementaryControlKeyWithName:(id)arg1 context:(id)arg2 ;
+(double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)arg1 keysForRow:(id)arg2 context:(id)arg3 ;
+(double)_keyPitchForKeyplane:(id)arg1 ;
+(void)adjustHorizontalPaddingForKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)_supplementaryScriptSwitchKeyWithContext:(id)arg1 ;
+(id)_cachedUndoOrRedoKeyForKeyplane:(id)arg1 ;
+(id)_supplementaryShiftKeysWithContext:(id)arg1 ;
+(void)transformLastRowKeysForKeyplane:(id)arg1 row:(unsigned long long)arg2 withTransformationContext:(id)arg3 ;
+(double)_keyplanePaddingForOrientation:(long long)arg1 row:(unsigned long long)arg2 ;
+(double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)arg1 orientation:(long long)arg2 ;
+(void)transformKeysForHandwritingKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(void)transformKeysForFourRowKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(void)transformKeysForFiveRowKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
@end

