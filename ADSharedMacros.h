/*  
 *  ADSharedMacros.h
 *  Created by Adam Duke on 6/18/10.
 *  Copyright 2010 Adam Duke. All rights reserved.
 *
 */
 
 #import <Foundation/Foundation.h>

/*
 * TT_RELEASE_SAFELY comes from https://github.com/facebook/three20
 * and is licensed under the Apache License which follows:
 *
 * Copyright 2009-2011 Facebook
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at 
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#define TT_RELEASE_SAFELY(__POINTER) { [__POINTER release]; __POINTER = nil; }


/* Credit to Will Shipley for IsEmpty
 * http://www.wilshipley.com/blog/2005/10/pimp-my-code-interlude-free-code.html
 * It appears to be in the public domain.

 * A static inline method to check if an id type contains any content
 * This is valid for objects that respond to the selectors length and count
 * The inline allows the compiler to actually put the method call in place
 * in the code where it is called from during compile. This should make for some
 * performance improvement, but can lead to binaries that
 * are larger than they need to be
 *
 *  */
static inline BOOL IsEmpty(id thing)
{
	return thing == nil
	       || ([thing respondsToSelector:@selector(length)]
	           && [(NSData *) thing length] == 0)
	       || ([thing respondsToSelector:@selector(count)]
	           && [(NSArray *) thing count] == 0);
}
