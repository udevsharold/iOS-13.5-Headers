/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOProtobufSessionTaskDelegate <NSObject>
@optional
-(void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2;

@required
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end

