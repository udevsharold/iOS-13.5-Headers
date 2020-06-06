/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>
#import <libobjc.A.dylib/SGSuggestionExtensions.h>

@protocol SGSuggestionDelegate;
@class SGRealtimeEvent, EKEvent, NSString;

@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {

	SGRealtimeEvent* _realtimeEvent;
	EKEvent* _eventKitEvent;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
+(id)calendarImage;
+(id)_eventStore;
+(void)confirm:(BOOL)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)suggestionPrimaryAction;
-(id)realtimeSuggestion;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionCategory;
-(id)suggestionTitle;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(id)primaryActionTitle;
-(id)initWithRealtimeEvent:(id)arg1 ;
-(id)suggestionsEvent;
-(void)eventKitStoreChangedNotification:(id)arg1 ;
-(id)eventKitEvent;
-(/*^block*/id)suggestionCategoryItemComparator;
@end

