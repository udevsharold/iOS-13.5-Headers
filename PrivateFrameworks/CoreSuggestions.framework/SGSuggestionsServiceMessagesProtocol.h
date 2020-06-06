/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceMessagesProtocol
@property (__weak) id<SGMessagesSuggestionsServiceDelegate> delegate; 
@required
-(id<SGMessagesSuggestionsServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)harvestedSuggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

