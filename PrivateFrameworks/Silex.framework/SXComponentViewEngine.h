/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentViewEngine.h>

@protocol SXComponentViewEngine <NSObject>
@required
-(id)componentViewForComponent:(id)arg1;
-(void)addFactory:(id)arg1;
-(void)removeFactory:(id)arg1;

@end


@protocol SXComponentViewPostProcessorManager;
@class SXComponentTypeMatching, NSString;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine> {

	SXComponentTypeMatching* _factoryMatching;
	id<SXComponentViewPostProcessorManager> _postProcessorManager;

}

@property (nonatomic,readonly) SXComponentTypeMatching * factoryMatching;                                 //@synthesize factoryMatching=_factoryMatching - In the implementation block
@property (nonatomic,readonly) id<SXComponentViewPostProcessorManager> postProcessorManager;              //@synthesize postProcessorManager=_postProcessorManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentViewForComponent:(id)arg1 ;
-(void)addFactory:(id)arg1 ;
-(void)removeFactory:(id)arg1 ;
-(id)initWithPostProcessorManager:(id)arg1 ;
-(SXComponentTypeMatching *)factoryMatching;
-(id<SXComponentViewPostProcessorManager>)postProcessorManager;
@end

