/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWInferenceProvider;
@class BWInferenceConfiguration;

@interface BWInferenceRequirement : NSObject {

	id<BWInferenceProvider> _provider;
	BWInferenceConfiguration* _configuration;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BWInferenceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(BWInferenceConfiguration *)configuration;
-(id<BWInferenceProvider>)provider;
-(id)initWithProvider:(id)arg1 configuration:(id)arg2 ;
@end

