/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositorRecipe.h>

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe> {

	BOOL _shouldDrawBorder;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (assign) BOOL shouldApplyMask; 
@property (assign) BOOL shouldDrawBorder;                             //@synthesize shouldDrawBorder=_shouldDrawBorder - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)shouldDrawBorder;
-(BOOL)shouldApplyMask;
-(void)setShouldDrawBorder:(BOOL)arg1 ;
@end
