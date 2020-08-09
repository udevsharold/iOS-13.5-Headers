/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKContentView;

@interface WKDataListSuggestionsControl : NSObject {

	WebDataListSuggestionsDropdownIOS* _dropdown;
	Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _suggestions;
	WKContentView* _view;

}

@property (assign,nonatomic,__weak) WKContentView * view;              //@synthesize view=_view - In the implementation block
-(void)invalidate;
-(WKContentView *)view;
-(void)setView:(WKContentView *)arg1 ;
-(long long)textAlignment;
-(void)updateWithInformation:(DataListSuggestionInformation*)arg1 ;
-(id)initWithInformation:(DataListSuggestionInformation*)arg1 inView:(id)arg2 ;
-(void)showSuggestionsDropdown:(WebDataListSuggestionsDropdownIOS*)arg1 activationType:(int)arg2 ;
-(void)didSelectOptionAtIndex:(long long)arg1 ;
-(id)textSuggestions;
-(long long)suggestionsCount;
-(String*)suggestionAtIndex:(long long)arg1 ;
@end
