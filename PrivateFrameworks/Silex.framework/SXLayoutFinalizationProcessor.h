/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutProcessor.h>

@protocol SXUnitConverterFactory;
@class NSString;

@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor> {

	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;              //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(void)finalizeLayoutBlueprint:(id)arg1 origin:(CGPoint)arg2 absoluteOrigin:(CGPoint)arg3 ;
-(id)initWithUnitConverterFactory:(id)arg1 ;
@end

