/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject {

	BOOL _visible;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) BOOL visible;                 //@synthesize visible=_visible - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_colorFromShapeEffectValue:(/*function pointer*/void*)arg1 ;
-(unsigned)effectType;
@end

