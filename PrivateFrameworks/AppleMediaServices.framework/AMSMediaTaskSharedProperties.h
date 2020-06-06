/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSMediaTokenServiceProtocol;
@class AMSURLSession;

@interface AMSMediaTaskSharedProperties : NSObject {

	AMSURLSession* _session;
	id<AMSMediaTokenServiceProtocol> _tokenService;

}

@property (nonatomic,readonly) AMSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
+(id)accessQueue;
+(id)propertiesForMediaTask:(id)arg1 ;
+(id)sharedPropertiesMapTable;
-(void)dealloc;
-(AMSURLSession *)session;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(id)initWithMediaTask:(id)arg1 ;
@end

