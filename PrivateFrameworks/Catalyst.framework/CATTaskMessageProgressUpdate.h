/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage {

	CATTaskProgress* _progress;

}

@property (nonatomic,copy) CATTaskProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CATTaskProgress *)progress;
-(void)setProgress:(CATTaskProgress *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 progress:(id)arg2 ;
@end

