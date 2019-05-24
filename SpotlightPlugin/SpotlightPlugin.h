//
//  SpotlightPlugin.h
//  SpotlightPlugin
//
//  Created by Rencp on 2019/5/24.
//  Copyright © 2019 Kssion. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for SpotlightPlugin.
FOUNDATION_EXPORT double SpotlightPluginVersionNumber;

//! Project version string for SpotlightPlugin.
FOUNDATION_EXPORT const unsigned char SpotlightPluginVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SpotlightPlugin/PublicHeader.h>

@class NSMutableArray, NSStatusItem, NSTimer;

@interface SPStatusItemView : NSObject
{
    unsigned int _showMenuId;
    double _spaceChangedTime;
    BOOL _didTriggerPeriodic;
    BOOL _didToggleWindowVisibilityAlready;
    NSTimer *_lostKeyFocusTimer;
    NSObject<OS_dispatch_queue> *_eventCollectorQueue;
    BOOL _eventFocusTaken;
    NSStatusItem *_statusItem;
    NSMutableArray *_eventCollector;
    id _eventMonitor;
}

@property(nonatomic) BOOL eventFocusTaken; // @synthesize eventFocusTaken=_eventFocusTaken;
@property(nonatomic) struct CPSProcessSerNum eventMonitorPSN; // @synthesize eventMonitorPSN=_eventMonitorPSN;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSMutableArray *eventCollector; // @synthesize eventCollector=_eventCollector;
@property(retain) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;

- (void)windowDidOrderOut;
- (void)_eventMonitorCleanup;
- (void)_eventMonitorStopAndProcess;
- (void)_eventMonitorStop;
- (void)_eventMonitorStart;
- (id)_eventCollectorPopEvents;
- (void)_eventCollectorAddEvent:(id)arg1;
- (void)_eventCollectorReset;

- (void)_screenChanged:(id)arg1;
- (void)_serverDiedSafe:(id)arg1;
- (void)_serverDied:(id)arg1;
- (void)_windowBecomeMain:(id)arg1;
- (void)_windowBecomeKey:(id)arg1;
- (void)_lostKeyFocus:(id)arg1;
- (void)_lostKeyFocusTimeout:(id)arg1;
- (void)_anotherMenuWentUp:(id)arg1;
- (void)openMenu;
- (void)closeMenuAndActivateApplicationOwnsMenuBarWhyDisappear:(long long)arg1;
- (void)closeMenuWhyDisappear:(long long)arg1;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (void)mouseAction:(id)arg1;
- (void)_toggleAfterSwitchingToScreen:(id)arg1 forceShow:(BOOL)arg2 menu:(BOOL)arg3;
- (void)_toggle:(BOOL)arg1 menu:(BOOL)arg2;
- (void)_toggle;
- (void)_showWindow:(BOOL)arg1 menu:(BOOL)arg2;
- (void)_spaceChanged:(id)arg1;
- (void)_hideMenuAndActivateApplicationOwnsMenuBar:(BOOL)arg1 whyDisappear:(long long)arg2;
- (void)_showMenu:(BOOL)arg1;
- (void)_showMenuFail;
- (void)_showMenuNow:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)screen;
- (BOOL)isHighlighted;
- (BOOL)isWindowShowing;

@end


@class CNUserActionTouchBar, NSArray, NSButton, NSCustomTouchBarItem, NSDictionary, NSImageView, NSMutableArray, NSString, NSTextField, NSTimer, NSTouchBar, NSView, NSXPCConnection, NSXPCListener, PRSResult, SPClientSession, SPListenerDelegate, SPMainViewController, SPMainViewModel, SPPrivateListenerDelegate, SPQueryTask, SPResultViewController, SPSearchField, SPSearchFieldEditor, SPSearchPanel, SPStatistics, SPStatusItemView, SPTouchBarManager, _SPResultsArrays;

@interface SPAppDelegate : NSObject <NSTouchBarDelegate, NSTouchBarProvider, NSApplicationDelegate, NSWindowDelegate>
{
    @public
    SPStatusItemView *_statusItemView;
}
- (void)reloadPreviewForCurrentSelection;
- (void)removePreview;
- (void)doCommand:(unsigned long long)arg1;
- (void)openTargetResultWithOptions:(unsigned long long)arg1;

- (BOOL)openURL:(id)arg1;
- (void)openResult:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)clearUserQueryForTouchBar;
- (void)clearUserQuery;
- (void)markAsUsedFromSubItemsForResult:(id)arg1;
- (BOOL)currentSelectionIsFirstResult;
- (long long)currentSelection;
- (id)selectedResult;
- (void)dealloc;
- (void)doUserQuery:(id)arg1 options:(unsigned long long)arg2 clearResults:(BOOL)arg3 keyboardLanguage:(id)arg4;
- (void)startTimerForClearingQuery;
- (void)stopTimerForClearingQuery;
- (void)clearSearchField;
- (void)_restoreDefaultSettingsFromTimer:(id)arg1;
- (void)clearResultsForEmptyQuery;
- (void)clearResultsforQueryId:(unsigned long long)arg1;
- (void)clearQuery;
- (void)processQueryResponse:(id)arg1;
- (void)processQueryResponseOnMainThread:(id)arg1;
- (void)updateDisplayOnTimer;
- (void)resetLastResults;
- (void)updateDisplay:(id)arg1;
- (void)updateItems:(id)arg1;
- (void)updateDisplayOnMainThread:(id)arg1;
- (void)hideNoResultsforQueryId:(unsigned long long)arg1 afterDelay:(double)arg2;
- (void)reloadResultsSelectingTopResult:(BOOL)arg1;
- (void)hideNoResults;
- (void)showNoResults;
- (void)displayNoResults:(id)arg1;
- (void)invalidateNoResultsTimer;
- (void)setQueryFinished:(BOOL)arg1;
- (void)setQueryId:(unsigned long long)arg1;

- (void)setUserSearchString:(id)arg1;
- (id)userSearchString;
- (void)setTopHitImageForResult:(id)arg1;
- (void)updateImage:(id)arg1;
- (BOOL)isInputSourceLanguageRTL;
- (void)setSuggestionForResult:(id)arg1;
- (void)prefsChanged:(id)arg1;
- (void)doSearchWithUserQuery:(id)arg1 options:(unsigned long long)arg2;
- (id)getCurrentQueryString;
- (unsigned long long)getCurrentQueryId;
- (void)resetPreviousUserQueryString;
- (void)doSearch:(id)arg1;
- (void)selectionControlInMainView;
- (void)selectionControlInSubView;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)windowDidResignKey:(id)arg1;
- (void)updateResults:(id)arg1 withRenderTime:(double)arg2;
- (void)windowDidBecomeKey:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)updateWindowIsVisible:(BOOL)arg1;
- (void)_statusItemView_showSearchWindow:(BOOL)arg1;
- (void)_statusItemView_hideSearchWindow;
- (void)showSearchWindow;
- (void)hideAndClearSearchWindow:(BOOL)arg1 activateApplicationOwnsMenuBar:(BOOL)arg2 whyDisappear:(long long)arg3;
- (void)hideSearchWindow;
- (void)finishHiding;
- (void)clearTopHit;
- (void)applicationDidHide:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)_handleOpenSearchAppleEvent:(id)arg1;
- (void)loadStatusItem;
- (BOOL)_inSimpleFinderMode;
- (void)awakeFromNib;
- (void)parsecResultLaunched:(id)arg1;
- (void)setupOnLaunch;
- (void)setResultsView:(id)arg1;
- (double)getQueryStartTime;
- (void)localeChanged:(id)arg1;
- (void)preheat;
- (void)registerCommandKeys;
- (id)init;
- (void)previewController:(id)arg1 didEngage:(id)arg2;
- (void)addSection:(id)arg1;
- (id)openMethod;
- (void)setOpenMethod:(id)arg1;
- (void)updateSelectingTopResult:(BOOL)arg1;
- (void)focusGroup:(id)arg1;
- (void)revealSelectedItem;
- (void)openSelectedItem;
- (void)didShowPreviewItem:(id)arg1;
- (void)didLoadPreviewItem:(id)arg1;
- (id)currentInputAndTimeStamp:(long long *)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playSelected:(id)arg1;
- (BOOL)previewIsPlaying;
- (void)makeCall:(id)arg1;
- (void)launchMaps:(id)arg1;
- (void)done:(id)arg1;
- (void)resetQuery;
- (void)updateTouchBarWithSelectionCleared:(BOOL)arg1;
- (void)updateTouchBar;
- (id)makeTouchBar;

@end
