/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,copy,readonly) NSDictionary * matchDictionary; 
+(BOOL)supportsSecureCoding;
+(id)storeItemWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)contentType;
-(NSDictionary *)matchDictionary;
@end

