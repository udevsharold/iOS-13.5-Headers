/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload {

	NSString* _humanReadableName;
	MCSingleSignOnPayloadKerberosInfo* _kerberosInfo;

}

@property (nonatomic,retain) NSString * humanReadableName;                                  //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,retain) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;              //@synthesize kerberosInfo=_kerberosInfo - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)humanReadableName;
-(MCSingleSignOnPayloadKerberosInfo *)kerberosInfo;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(void)setKerberosInfo:(MCSingleSignOnPayloadKerberosInfo *)arg1 ;
@end

