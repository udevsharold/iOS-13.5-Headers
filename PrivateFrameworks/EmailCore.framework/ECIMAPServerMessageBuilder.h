/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol ECIMAPServerMessageBuilder <ECBaseServerMessageBuilderProtocol>
@property (assign,nonatomic) unsigned imapUID; 
@property (nonatomic,copy) NSSet * labels; 
@required
-(NSSet *)labels;
-(void)setLabels:(id)arg1;
-(unsigned)imapUID;
-(void)setImapUID:(unsigned)arg1;

@end

