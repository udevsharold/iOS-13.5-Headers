/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContentEffect.h>
#import <UIKitCore/_UIImageContentLayoutTarget.h>

@class NSString;

@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget> {

	double _preferredContentScaleFactor;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                                             //@synthesize bounds=_bounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (nonatomic,readonly) long long contentMode; 
@property (nonatomic,readonly) BOOL _hasContentGravity; 
@property (nonatomic,readonly) double preferredContentScaleFactor;                        //@synthesize preferredContentScaleFactor=_preferredContentScaleFactor - In the implementation block
@property (nonatomic,readonly) BOOL _layoutShouldFlipHorizontalOrientations; 
+(id)targetWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGRect)bounds;
-(long long)semanticContentAttribute;
-(long long)contentMode;
-(double)preferredContentScaleFactor;
-(BOOL)_layoutShouldFlipHorizontalOrientations;
-(BOOL)_hasContentGravity;
-(id)_effectForRenderingSource:(id)arg1 ;
-(id)_renditionForSource:(id)arg1 size:(CGSize)arg2 withCGImageProvider:(/*^block*/id)arg3 lazy:(BOOL)arg4 ;
@end

