/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <TSReading/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {

	NSDictionary* mConfig;
	Dictionary* mOperatorDictionary;
	Manager* mFontManager;
	Manager* mKerningManager;
	Config* mLayoutConfig;

}

@property (assign,nonatomic) BOOL kerning; 
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg1 ;
+(id)dataForEnvironment:(id)arg1 ;
-(void)dealloc;
-(BOOL)kerning;
-(void)setKerning:(BOOL)arg1 ;
-(void)endLayout;
-(id)initWithConfig:(id)arg1 ;
-(const Manager*)fontManager;
-(void)beginLayout;
-(const Manager*)kerningManager;
-(const Config*)layoutConfig;
-(const Dictionary*)operatorDictionary;
-(id)newDictionaryForArchiving;
@end

