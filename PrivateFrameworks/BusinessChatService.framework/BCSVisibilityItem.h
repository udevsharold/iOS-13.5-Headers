/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _language;
	NSString* _country;
	double _ratio;

}

@property (nonatomic,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * country;               //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) double ratio;                     //@synthesize ratio=_ratio - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)country;
-(NSString *)language;
-(double)ratio;
-(id)initWithVisibility:(id)arg1 ;
-(id)initWithLanguage:(id)arg1 country:(id)arg2 ratio:(double)arg3 ;
-(BOOL)isVisibleForDSID:(id)arg1 ;
@end

