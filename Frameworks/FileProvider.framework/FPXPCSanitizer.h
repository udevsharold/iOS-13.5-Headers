/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FPXPCSanitizer : NSObject {

	NSString* _providerIdentifier;

}

@property (nonatomic,readonly) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
+(id)permittedErrorDomains;
-(id)init;
-(NSString *)providerIdentifier;
-(id)initWithProviderDomainIdentifier:(id)arg1 ;
@end

