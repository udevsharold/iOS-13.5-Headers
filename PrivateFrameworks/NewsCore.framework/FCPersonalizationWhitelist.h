/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBPersonalizationWhitelist, NSSet, NSDictionary;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBPersonalizationWhitelist* _pbWhitelist;
	NSSet* _portraitDisabledTagIDs;
	NSDictionary* _whitelist;

}

@property (nonatomic,retain) NSDictionary * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSSet * portraitDisabledTagIDs;              //@synthesize portraitDisabledTagIDs=_portraitDisabledTagIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSDictionary * defaultTags; 
@property (nonatomic,readonly) NSDictionary * optionalTags; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)whitelist;
-(void)setWhitelist:(NSDictionary *)arg1 ;
-(id)jsonEncodableObject;
-(NSDictionary *)defaultTags;
-(NSDictionary *)optionalTags;
-(id)initWithPBPersonalizationWhitelist:(id)arg1 ;
-(NSSet *)portraitDisabledTagIDs;
-(void)setPortraitDisabledTagIDs:(NSSet *)arg1 ;
@end

