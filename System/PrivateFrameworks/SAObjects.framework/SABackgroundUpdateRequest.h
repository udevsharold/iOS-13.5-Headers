/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@interface SABackgroundUpdateRequest : SAStartRequest

@property (nonatomic,retain) id<SAAceSerializable> attachment; 
+(id)backgroundUpdateRequest;
+(id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id<SAAceSerializable>)attachment;
-(void)setAttachment:(id<SAAceSerializable>)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
