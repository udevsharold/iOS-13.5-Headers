/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOETATrafficUpdateRequest, NSString;

@interface GEOETAUpdateableWillSendReply : GEOXPCReply <GEOXPCReply> {

	GEOETATrafficUpdateRequest* _updatedRequest;

}

@property (nonatomic,retain) GEOETATrafficUpdateRequest * updatedRequest;              //@synthesize updatedRequest=_updatedRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOETATrafficUpdateRequest *)updatedRequest;
-(void)setUpdatedRequest:(GEOETATrafficUpdateRequest *)arg1 ;
@end

