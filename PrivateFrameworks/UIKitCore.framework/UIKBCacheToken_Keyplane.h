/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {

	CGSize _size;
	SCD_Union_UI85 _style;
	NSString* _geometrySetName;
	NSString* _keySetName;
	NSString* _cachedGestureKeySetName;
	NSString* _annotations;
	NSString* _locale;

}
+(id)tokenForKeyplane:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(SCD_Struct_UI84)styling;
-(void)setStyling:(SCD_Struct_UI84)arg1 ;
-(BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2 ;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(id)stringForSplitState:(BOOL)arg1 handBias:(long long)arg2 ;
-(id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2 ;
@end

