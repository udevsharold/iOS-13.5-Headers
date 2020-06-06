/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SAClientBoundCommand <SAAceCommand,SAAceReferable>
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@required
-(NSArray *)callbacks;
-(NSString *)appId;
-(void)setAppId:(id)arg1;
-(BOOL)requiresResponse;
-(void)setCallbacks:(id)arg1;

@end

