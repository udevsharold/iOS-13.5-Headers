/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PRSTriggerTask.h>

@interface PRSFTETask : NSObject <PRSTriggerTask> {

	/*^block*/id _reply;

}

@property (copy) id reply;              //@synthesize reply=_reply - In the implementation block
-(id)reply;
-(id)initWithReply:(/*^block*/id)arg1 ;
-(void)setReply:(id)arg1 ;
-(BOOL)needsBag;
-(void)triggerQuery:(BOOL)arg1 ;
-(BOOL)allowLocation;
@end
