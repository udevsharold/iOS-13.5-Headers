/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFRecordStorageProvider <NSObject>
@required
-(id)recordWithDescriptor:(id)arg1 error:(id*)arg2;
-(BOOL)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3;
-(id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id*)arg3;
-(BOOL)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3;

@end

