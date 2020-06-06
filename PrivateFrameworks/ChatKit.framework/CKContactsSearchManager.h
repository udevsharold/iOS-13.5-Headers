/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>
#import <libobjc.A.dylib/CNAutocompleteUIFetchDelegate.h>

@protocol CKContactsSearchManagerDelegate;
@class NSArray, CNAutocompleteSearchManager, NSCharacterSet, NSMutableArray, NSNumber, NSString;

@interface CKContactsSearchManager : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate> {

	BOOL _suppressGroupSuggestions;
	BOOL _biasForOutgoingInteraction;
	id<CKContactsSearchManagerDelegate> _delegate;
	NSArray* _enteredRecipients;
	CNAutocompleteSearchManager* _searchManager;
	NSCharacterSet* _emojiCharacterSet;
	NSMutableArray* _searchResults;
	NSNumber* _currentSearchTaskID;
	NSString* _searchText;

}

@property (nonatomic,retain) CNAutocompleteSearchManager * searchManager;                      //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emojiCharacterSet;                               //@synthesize emojiCharacterSet=_emojiCharacterSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchResults;                                   //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSNumber * currentSearchTaskID;                                   //@synthesize currentSearchTaskID=_currentSearchTaskID - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                            //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic,__weak) id<CKContactsSearchManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * enteredRecipients;                                      //@synthesize enteredRecipients=_enteredRecipients - In the implementation block
@property (assign,nonatomic) BOOL suppressGroupSuggestions;                                    //@synthesize suppressGroupSuggestions=_suppressGroupSuggestions - In the implementation block
@property (assign,nonatomic) BOOL biasForOutgoingInteraction;                                  //@synthesize biasForOutgoingInteraction=_biasForOutgoingInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CKContactsSearchManagerDelegate>)delegate;
-(void)setDelegate:(id<CKContactsSearchManagerDelegate>)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)setSearchResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchResults;
-(void)cancelSearch;
-(void)searchWithText:(id)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(CNAutocompleteSearchManager *)searchManager;
-(NSArray *)enteredRecipients;
-(void)setEnteredRecipients:(NSArray *)arg1 ;
-(void)setSearchManager:(CNAutocompleteSearchManager *)arg1 ;
-(BOOL)suppressGroupSuggestions;
-(void)setSuppressGroupSuggestions:(BOOL)arg1 ;
-(void)setBiasForOutgoingInteraction:(BOOL)arg1 ;
-(BOOL)biasForOutgoingInteraction;
-(void)setCurrentSearchTaskID:(NSNumber *)arg1 ;
-(NSNumber *)currentSearchTaskID;
-(id)_cullOldResults:(id)arg1 ;
-(id)_sortResultsByDate:(id)arg1 ;
-(id)_filterGroupResults:(id)arg1 ;
-(NSRange)_rangeForSearchTerm:(id)arg1 inTarget:(id)arg2 tokenizedByCharacterSet:(id)arg3 ;
-(NSCharacterSet *)emojiCharacterSet;
-(id)matchingConversationWithGuid:(id)arg1 ;
-(BOOL)shouldIncludeGroupInResults:(id)arg1 ;
-(id)createAutocompelteGroupMembersFromParticipants:(id)arg1 ;
-(id)participantMatchResultsForSearchTerm:(id)arg1 ;
-(id)nameGroupSearchResults;
-(id)participantMatchGroupResults;
-(BOOL)getSupplementalGroupsForSearchQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3 ;
-(void)setEmojiCharacterSet:(NSCharacterSet *)arg1 ;
@end

