/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOImageServiceRequest, NSUUID, NSString;

@interface GEOImageServiceRequestSimple : GEOXPCRequest <GEOXPCRequest> {

	GEOImageServiceRequest* _request;
	NSUUID* _identifier;

}

@property (nonatomic,retain) GEOImageServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setRequest:(GEOImageServiceRequest *)arg1 ;
-(GEOImageServiceRequest *)request;
-(BOOL)expectsReply;
@end

