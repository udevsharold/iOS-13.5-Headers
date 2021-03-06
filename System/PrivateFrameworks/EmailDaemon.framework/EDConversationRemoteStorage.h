/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDConversationRemoteStorage <NSObject>
@required
-(BOOL)synchronize;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1;
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(void)refresh;
-(BOOL)isInitialized;
-(void)removeDictionaryForKey:(id)arg1;
-(id)storageName;

@end

