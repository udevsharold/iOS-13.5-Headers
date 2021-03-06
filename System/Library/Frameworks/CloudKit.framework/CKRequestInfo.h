/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CKRequestInfo : NSObject <NSSecureCoding> {

	NSString* _requestUUID;
	NSDictionary* _responseHTTPHeaders;
	NSDictionary* _w3cNavigationTiming;

}

@property (nonatomic,readonly) NSString * requestUUID;                          //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHTTPHeaders;              //@synthesize responseHTTPHeaders=_responseHTTPHeaders - In the implementation block
@property (nonatomic,readonly) NSDictionary * w3cNavigationTiming;              //@synthesize w3cNavigationTiming=_w3cNavigationTiming - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)requestUUID;
-(NSDictionary *)responseHTTPHeaders;
-(NSDictionary *)w3cNavigationTiming;
-(id)initWithRequestUUID:(id)arg1 responseHTTPHeaders:(id)arg2 w3cTiming:(id)arg3 ;
@end

